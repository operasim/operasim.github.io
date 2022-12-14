@echo off
CALL C:\anaconda3\Scripts\activate.bat
ECHO Hello! OperaSIM
CHDIR C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/util
CALL conda activate vplan03
START pip install -r requirements.txt
SET /P  width=시뮬레이터 화면의 가로 사이즈를 입력해 주세요 :
SET /P  height=시뮬레이터 화면의 세로 사이즈를 입력해 주세요 :
CHDIR C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor
START CarlaUE4 -quality-level=Epic -world-port=2000 -resx=%width% -resy=%height%
CALL timeout 10 > NULL
CHDIR C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/util
SET /P  osm_file=시뮬레이션할 osm 파일 경로를 입력해 주세요 :
SET /P  xodr_file=추출될 xodr 파일 이름 및 경로를 입력해 주세요 :
START python osm_to_xodr.py -i %osm_file% -o %xodr_file%
SET /P  xodr_file=저장한 xodr 파일 이름 및 경로를 입력해 주세요 :
START python config.py -x=%xodr_file%

