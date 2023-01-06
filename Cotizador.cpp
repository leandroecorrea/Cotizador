#include <wchar.h>
#include <locale.h>
#include <iostream>
#include "src/Application.h"

int main()
{
    setlocale(LC_ALL, "");
    Application app;
    app.Run();    
}


