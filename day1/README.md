# Day1 Recap

- C++는 코드가 컴파일러에 의해 직접 기계어로 번역되기 때문에 일반적으로 다른언어에 비해 빠르다.
- 컴파일된 기계어 코드는 OS로 전달되고, 가용할 수 있는 CPU, RAM 메모리를 이용해 작성된 내용들을 수행한다.
- 이 때 프로그램의 최소 단위는 함수로 구분된다. 그 중에서 가장 먼저 찾는(실행 시키는) 함수가 바로 `main()`함수.

  ```c++
  int x = 10;
  // int x = 11; --> 불가능함.

  x = 123; // left value, right value(literal)
  x = x + 7;
  cout << &x << endl; // ampersand
  ```

- int형 값 `10`(Literal)을 저장할 수 있는 메모리 공간을 할당 받았고, 메모리 주소 값 대신 사용하는 것이 변수(Variable) `x`
- `x`라는 변수 이름이 가리키고 있는 메모리 공간에 정수형 값 `10`을 저장한다.
- 중복되는 변수명 선언을 허용하지 않는다. `‘int x’ previously declared here`
- 변수 앞에 `&`(Ampersand) 가 붙으면 메모리 주소를 출력하게 된다.
- Left value & Right Value
  - 메모리 상의 명확한 위치를 가리키는 표현식으로, 대입 연산자의 왼쪽에 올 수 있다.
  - 개발자가 접근하고 수정할 수 있다.
  - rvalue는 메모리 상의 명확한 주소를 가지지 않는 임시 값이나, 직접적으로 참조할 수 없는 값을 나타나며 대입 연산자의 오른쪽에 올 수 있으고 일반적으로 데이터를 저장하거나 수정할 수 없는 표현식이다.
  - 리터럴(예: 5, 'a'), 임시 객체, 표현식의 결과(예: 2 + 3, 함수 호출의 반환 값) 등이 rvalue의 예로, 대부분의 경우 직접적으로 개발자가 메모리 상의 위치에 접근하여 변경할 수 없다.

## Stream in, out

```c++
cout << "How Old Are You?"; // Stream Out

int age = 0;
cin >> age; // Stream In

cout << "Thank you." << endl; // End Line
```

- `cout <<` 나가는 스트림(output stream)
- `cin >>` 들어오는 스트림(input stream)

## Function

```c++
int simpleFunction(int x, int y)
{
    return x + y;
}

// 동일한 이름의 정의가 불가능한 것 처럼 동일한 이름의 함수 정의가 불가능함.
// int simpleFunction(int x, int y)
// {
//     return x * y;
// }

int main()
{
    cout << "Input x and y" << endl;

    int x = 0;
    int y = 0;
    cin >> x;
    cin >> y;

    int result = simpleFunction(x, y);
    cout << result << endl;

    return 0;
}
```

## Local Scope(지역 범위)
