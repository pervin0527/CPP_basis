## C++ Programming in Ubuntu(Linux) with VSCode

[참고](https://roytravel.tistory.com/381)

1.  `sudo apt-get install build-essential`
2.  Install C/C++ extensions
3.  ctrl + shift + P $\rarr$ C/C++:구성 편집(UI)
    - 컴파일러 선택 C : gcc, C++ : gcc++
    - IntelliSence 모드 : linux-gcc-x64
    - 설정을 저장하고 나면 `.vscode` 폴더에 `c_cpp_properties.json` 파일이 만들어진다.
4.  터미널 → 작업 구성 → 템플릿에서 tasks.json 파일 만들기 → Others 선택.
5.  `.vscode` 폴더에서 `tasks.json`에 아래 내용 복사/붙여넣기.

        {
            "version": "2.0.0",
            "runner": "terminal",
            "type": "shell",
            "echoCommand": true,
            "presentation" : { "reveal": "always" },
            "tasks": [
                //C++ 컴파일
                {
                    "label": "save and compile for C++",
                    "command": "g++",
                    "args": [
                        "${file}",
                        "-o",
                        "${fileDirname}/${fileBasenameNoExtension}"
                    ],
                    "group": "build",

                    //컴파일시 에러를 편집기에 반영
                    //참고:   https://code.visualstudio.com/docs/editor/tasks#_defining-a-problem-matcher

                    "problemMatcher": {
                        "fileLocation": [
                            "relative",
                            "${workspaceRoot}"
                        ],
                        "pattern": {
                            // The regular expression.
                        //Example to match: helloWorld.c:5:3: warning: implicit declaration of function 'prinft'
                            "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning error):\\s+(.*)$",
                            "file": 1,
                            "line": 2,
                            "column": 3,
                            "severity": 4,
                            "message": 5
                        }
                    }
                },
                //C 컴파일
                {
                    "label": "save and compile for C",
                    "command": "gcc",
                    "args": [
                        "${file}",
                        "-o",
                        "${fileDirname}/${fileBasenameNoExtension}"
                    ],
                    "group": "build",

                    //컴파일시 에러를 편집기에 반영
                    //참고:   https://code.visualstudio.com/docs/editor/tasks#_defining-a-problem-matcher

                    "problemMatcher": {
                        "fileLocation": [
                            "relative",
                            "${workspaceRoot}"
                        ],
                        "pattern": {
                            // The regular expression.
                        //Example to match: helloWorld.c:5:3: warning: implicit declaration of function 'prinft'
                            "regexp": "^(.*):(\\d+):(\\d+):\\s+(warning error):\\s+(.*)$",
                            "file": 1,
                            "line": 2,
                            "column": 3,
                            "severity": 4,
                            "message": 5
                        }
                    }
                },
                // 바이너리 실행(Ubuntu)
                {
                    "label": "execute",
                    "command": "${fileDirname}/${fileBasenameNoExtension}",
                    "group": "test"
                }
                // 바이너리 실행(Windows)
                // {
                //     "label": "execute",
                //     "command": "cmd",
                //     "group": "test",
                //     "args": [
                //         "/C", "${fileDirname}\\${fileBasenameNoExtension}"
                //     ]

                // }
            ]
        }

6.  `g++ -o ./build/test test.cpp`
