from pathlib import Path

# Define the path
BASE_DIR = Path('atcoder/abc337/C')

INPUT = BASE_DIR / 'in'
OUTPUT = BASE_DIR / 'out'

# Add .in to all file in folder
for file in INPUT.glob('*'):
    file.rename(file.with_suffix('.in'))

# Add .out to all file in folder
for file in OUTPUT.glob('*'):
    file.rename(file.with_suffix('.out'))