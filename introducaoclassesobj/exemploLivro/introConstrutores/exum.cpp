#include <iostream>
#include <string> // programa padrão do c++ que utiliza classe de string

using namespace std;

// Definição da classe GradeBook
class GradeBook{
    public:
    // função que configura o nome do curso
    void setCourseName( string name )
    {
        courseName = name; // armazena o nome do curso no objeto
    } // fim da função setCourseName
    // função que obtém o nome do curso
    string getCourseName()
    {
        return courseName; // retorna o courseName do objeto
    } // fim da função getCourseName

    // função que exibe uma mensagem de boas-vindas ao usuário do GradeBook
    void displayMessage()
    {
        cout << "Esta é a class GradeBook em ação!\n E estou estudando" << getCourseName() << "!" << endl;
    } // fim da função displayMessage
    private:
        string courseName; // nome do curso para esse GradeBook
}; // fim da classe GradeBook


int main(){

    string nameOfCourse; // strings de caracteres para armazenar o nome do curso
    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook
    
    // exibe valor inicial de courseName
    cout << "Initial course name is: " << myGradeBook.getCourseName() << endl;
   
    // prompt para entrada do nome do curso
    cout << "Please enter the course name:" << endl;
    getline( cin, nameOfCourse ); // lê o nome de um curso com espaços em branco
    myGradeBook.setCourseName( nameOfCourse ); // configura o nome do curso
    cout << endl; // gera saída de uma linha em branco
   
    myGradeBook.displayMessage(); // chama a função displayMessage do objeto
    return 0; 
}   