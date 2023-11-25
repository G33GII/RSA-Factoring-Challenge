import subprocess

# Run the time_measurement.py script and capture the output
output = subprocess.check_output(['python', 'time.py'], universal_newlines=True)

# Print the captured output
print(output)
