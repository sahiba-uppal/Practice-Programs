template <class U, class V>
Class Room(){
    Private:
        U somethin;
        V anythin;
    Public:
        Room(x,y){
        somethin=x;
        anythin=y;}
        Void func(){
            Cout<<“Here is”<<somethin;
            Cout<<“And here”<<anythin;}
};

Int main(){
Room <int, float> R1 (4,6.5);
}
