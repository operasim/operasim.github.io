@echo off
CALL C:\anaconda3\Scripts\activate.bat
ECHO Hello! OperaSIM
CHDIR C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/util
CALL conda activate vplan03
START pip install -r requirements.txt
SET /P  width=�ùķ����� ȭ���� ���� ����� �Է��� �ּ��� :
SET /P  height=�ùķ����� ȭ���� ���� ����� �Է��� �ּ��� :
CHDIR C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor
START CarlaUE4 -quality-level=Epic -world-port=2000 -resx=%width% -resy=%height%
CALL timeout 10 > NULL
CHDIR C:/Users/user/Downloads/vplan/project01/Project1/Project1/WindowsNoEditor/PythonAPI/util
SET /P  osm_file=�ùķ��̼��� osm ���� ��θ� �Է��� �ּ��� :
SET /P  xodr_file=����� xodr ���� �̸� �� ��θ� �Է��� �ּ��� :
START python osm_to_xodr.py -i %osm_file% -o %xodr_file%
SET /P  xodr_file=������ xodr ���� �̸� �� ��θ� �Է��� �ּ��� :
START python config.py -x=%xodr_file%

