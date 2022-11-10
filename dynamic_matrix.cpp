#include<iostream>
using namespace std;
class matrix{
    private:
    int row;
    int column;
    int** ptr;

    public:
    matrix(){
        row=1;
        column=1;
        ptr = new int*[row];
        for (int i=0;i<row;i++){
            ptr[i] = new int [column];
        }
    }
    matrix(int row, int column){
        this->row=row;
        this->column=column;
        ptr = new int*[row];
        for (int i=0;i<row;i++){
            ptr[i] = new int [column];
        }
    }
    matrix(const matrix &obj){
        row=obj.row;
        column=obj.column;
        ptr = obj.ptr;
    }
    ~matrix(){}
    void setMatrix(){
        cout<<"Enter elements into matrix row wise : "<<endl;
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                cin>>ptr[i][j];
            }
        }
    }
    void getMatrix(){
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                cout<<ptr[i][j]<<"  ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    void transpose(){
        int* temp;
        temp = new int [row];
        for (int i=0;i<row;i++){
            temp[i] = ptr [i][0];
        }
        for (int i=0;i<column;i++){
            ptr[i][0] = ptr [0][i];
        }
        for (int i=0;i<row;i++){
            ptr[0][i] = temp[i];
        }
        delete[] temp;
        temp = NULL;
    }
    void rowSwap(int r1, int r2){
        int* temp;
        r1 = r1 -1;
        r2 = r2 -1;
        temp = new int [column];
        for (int i=0;i<column;i++){
            temp[i] = ptr[r1][i];
        }
        for (int i=0;i<column;i++){
            ptr[r1][i] = ptr[r2][i];
        }
        for (int i=0;i<column;i++){
            ptr[r2][i] = temp[i];
        }
        delete[] temp;
        temp = NULL;
    }
    friend ostream& operator<<(ostream& COUT, matrix& obj){
        for(int i=0; i<obj.row; i++){
            for(int j=0; j<obj.column; j++){
                COUT<<obj.ptr[i][j]<<"  ";
            }
            COUT<<endl;
        }
        COUT<<endl;
        return COUT;
    }
    void rowAdd(){
        int r1;
        int r2;
        cout<<"Input the row number in which you want the other row to be added to first."<<endl<<"Enter first row : ";
        cin>>r1;
        r1 = r1 - 1;
        cout<<"Enter second row : ";
        cin>>r2;
        r2 = r2 - 1;
        for (int i=0;i<column;i++){
            ptr[r1][i] = ptr[r1][i] + ptr[r2][i];
        }
    }
    void rowSub(){
        int r1;
        int r2;
        cout<<"Input the row number in which you want the other row to be subtracted  to first."<<endl<<"Enter first row : ";
        cin>>r1;
        r1 = r1 - 1;
        cout<<"Enter second row : ";
        cin>>r2;
        r2 = r2 - 1;
        for (int i=0;i<column;i++){
            ptr[r1][i] = ptr[r1][i] - ptr[r2][i];
        }
    }
    void rowMul(){
        int r1;
        int r2;
        cout<<"Input the row number in which you want the other row to be multipled to first."<<endl<<"Enter first row : ";
        cin>>r1;
        r1 = r1 - 1;
        cout<<"Enter second row : ";
        cin>>r2;
        r2 = r2 - 1;
        for (int i=0;i<column;i++){
            ptr[r1][i] = ptr[r1][i] * ptr[r2][i];
        }
    }
    void rowDiv(){
        int r1;
        int r2;
        cout<<"Input the row number in which you want the other row to be divided from first."<<endl<<"Enter first row : ";
        cin>>r1;
        r1 = r1 - 1;
        cout<<"Enter second row : ";
        cin>>r2;
        r2 = r2 - 1;
        for (int i=0;i<column;i++){
            ptr[r1][i] = ptr[r1][i] / ptr[r2][i];
        }
    }
};
int main(){
    int row;
    int col;
    cout<<"Enter number of rows : ";
    cin>>row;
    cout<<"Enter number of columns : ";
    cin>>col;
    matrix m1(row, col);
    m1.setMatrix();
    m1.getMatrix();
    m1.transpose();
    m1.getMatrix();
    m1.rowSwap(1, 2);
    m1.getMatrix();
    m1.rowAdd();
    cout<<m1;
    m1.rowSub();
    cout<<m1;
    m1.rowMul();
    cout<<m1;
    m1.rowDiv();
    cout<<m1;
}