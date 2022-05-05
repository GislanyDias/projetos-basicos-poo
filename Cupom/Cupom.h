#include <string>
using std::string;


//Interface
class Cupom
{
public:

    Cupom(string id, string des, int qntd, float preco);

    //Set's
    void setId(string id);

    void setDes(string des);

    void setQntd(int qntd);

    void setPreco(float preco);

    //Get's
    string getId();

    string getDes();

    int getQntd();

    float getPreco();

    //Calcula cupom
    float calculaCupom();

    void displayMessage();

private:
    string id;
    string des;
    int qntd;
    float preco;

};

