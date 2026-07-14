using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FortRuntime
{
    public static class FolderManager
    {
        private static readonly string ConfigFilePath = Path.Combine(AppContext.BaseDirectory, "fortnite_folders.txt");
        private static List<string> folders = new List<string>();

        public static void LoadFolders()
        {
            try
            {
                if (File.Exists(ConfigFilePath))
                {
                    var lines = File.ReadAllLines(ConfigFilePath);
                    folders.Clear();
                    foreach (var line in lines)
                    {
                        if (!string.IsNullOrWhiteSpace(line))
                        {
                            folders.Add(line.Trim());
                        }
                    }
                }
            } catch (Exception ex)
            {
                Console.WriteLine($"Error loading folders: {ex.Message}");
            }
        }

        public static void SaveFolders()
        {
            try
            {
                File.WriteAllLines(ConfigFilePath, folders);
            } catch (Exception ex)
            {
                Console.WriteLine($"Error saving folders: {ex.Message}");
            }
        }

        public static void AddFolder()
        {
            Console.Write("Entry Fortnite folder path: ");

            string? folderPath = Console.ReadLine();
            if (string.IsNullOrWhiteSpace(folderPath))
            {
                Console.WriteLine("Folder path cannot be empty.");
                return;
            }

            folderPath = folderPath.Trim();

            string exePath = Path.Combine(folderPath, "FortniteGame\\Binaries\\Win32\\FortniteClient-Win32-Shipping.exe");

            if (!File.Exists(exePath))
            {
                Console.WriteLine("FortniteClient-Win32-Shipping.exe don't exist");
                return;
            }

            if (folders.Contains(folderPath))
            {
                Console.WriteLine("Folder is already added.");
                return;
            }

            folders.Add(folderPath);
            SaveFolders();
            Console.WriteLine("Folder added successfully!");
        }

        public static void RemoveFolder()
        {
            if (folders.Count == 0)
            {
                Console.WriteLine("No folders to remove.");
                return;
            }

            Console.WriteLine("Saved folders:");
            for (int i = 0; i < folders.Count; i++)
            {
                Console.WriteLine($"{i + 1}. {folders[i]}");
            }

            Console.WriteLine("Select a folder number to remove: ");
            string? input = Console.ReadLine();
            if (int.TryParse(input, out int index) && index >= 1 && index <= folders.Count)
            {
                string removed = folders[index - 1];
                folders.RemoveAt(index - 1);
                SaveFolders();
                Console.WriteLine($"Removed folder: {removed}");
            }
            else
            {
                Console.WriteLine("Invalid selection.");
            }
        }

        public static void CheckLaunchGame()
        {
            if (folders.Count == 0)
            {
                Console.WriteLine("No folders configured. Please add a Fortnite folder first.");
                return;
            }

            string? targetFolder = null;
            string? targetExePath = null;

            foreach (var folder in folders)
            {
                string exePath = Path.Combine(folder, "FortniteGame\\Binaries\\Win32\\FortniteClient-Win32-Shipping.exe");
                if (File.Exists(exePath))
                {
                    targetFolder = folder;
                    targetExePath = exePath;
                    Console.WriteLine($"FortniteClient-Win32-Shipping.exe exists in folder: {folder}");
                }
            }

            if (targetFolder != null && targetExePath != null)
            {
                Console.WriteLine("You can launch into the game!");
                Console.WriteLine("Do you want to launch the game now? (y/n): ");
                string? response = Console.ReadLine();
                if (response?.Trim().ToLower() == "y")
                {
                    try
                    {
                        Console.WriteLine($"Launching Fortnite from: ${targetExePath}");
                        ProcessStartInfo startInfo = new ProcessStartInfo
                        {
                            FileName = targetExePath,
                            WorkingDirectory = targetFolder,
                            UseShellExecute = false,
                        };
                        Process.Start(startInfo);
                    } catch (Exception ex)
                    {
                        Console.WriteLine($"Error launching game: {ex.Message}");
                    }
                }
            } else
            {
                Console.WriteLine("FortniteClient-Win32-Shipping.exe don't exist. You cannot launch into the game.");
            }
        }
    }
}
