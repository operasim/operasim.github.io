@echo on

ECHO Hello! OperaSIM %USERNAME%
ECHO Carla 시뮬레이터 실행을 위해서는 Nvidia Driver를 설치해 주세요.
MKDIR Conda
CHDIR C:\Users\%USERNAME%\Conda
START C:\Windows\System32\wget https://repo.anaconda.com/archive/Anaconda3-2022.10-Windows-x86_64.exe
START Anaconda3-2022.05-Windows-x86_64.exe
START https://www.nvidia.co.kr/Download/index.aspx?lang=kr
CHDIR C:\Users\%USERNAME%
START wget https://desktop.docker.com/win/main/amd64/Docker%20Desktop%20Installer.exe
START C:\Users\%USERNAME%Docker%20Desktop%20Installer.exe
START wget https://carla-releases.s3.eu-west-3.amazonaws.com/Windows/CARLA_0.9.13.zip
START unzip CARLA_0.9.13.zip
CHDIR C:\Users\%USERNAME%\CARLA_0.9.13
START CarlaUE4
