@echo on

START conda activate operasim
CHDIR C:\Users\%USERNAME%
MKDIR Docker
CHDIR C:\Users\%USERNAME%\Docker
START wget https://desktop.docker.com/win/main/amd64/Docker%20Desktop%20Installer.exe
START Docker%20Desktop%20Installer.exe
START docker pull dhdiagram/operasim:carla
START docker pull dhdiagram/operasim:carla4.26.2
START docker pull dhdiagram/operasim:carla-prerequisites4.26.2
START docker tag dhdiagram/operasim:carla carla:latest
CHDIR C:\Users\user\Downloads\vplan\project01\Project1\Project1\WindowsNoEditor
MKDIR Input Output
START python docker_tools.py --input ./Input --output ./Output --packages   