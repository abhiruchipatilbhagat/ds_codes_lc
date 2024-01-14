python_program_code = """
print("Hello, World!")
"""

with open('hello_world_generated.py', 'w') as python_file:
    python_file.write(python_program_code)

print("Python program generated successfully in 'hello_world_generated.py'")

