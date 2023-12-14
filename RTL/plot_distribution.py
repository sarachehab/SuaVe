import matplotlib.pyplot as plt
import sys

# Check if arguments are provided
if len(sys.argv) > 1:
    # Access command-line arguments
    arg1 = sys.argv[1]  # The first argument (index 0 is the script name)
    distribution = arg1

# Read the data from the file
file_path = 'distribution.txt'  # Replace 'your_file.txt' with the actual file path
with open(file_path, 'r') as file:
    data = [float(line.strip()) for line in file.readlines()]

# Create x values ranging from 0 to 255
x_values = list(range(256))

# Plot the graph
plt.figure(figsize=(8, 6))  # Adjust figure size if needed
plt.plot(x_values, data, label=distribution)
plt.title('PDF of ' + distribution.capitalize() + ' Distribution')
plt.xlabel('X values')
plt.ylabel('Frequency')
plt.grid(True)
plt.show()
