#include <iostream>
#include <vector>

using namespace std;

int vi_tri_hien_tai = 0;

string giai_ma_ngoac_don(vector<int>& mang) {
    int so_luong_nho_nhat = mang[vi_tri_hien_tai] / 2;
    
    if (vi_tri_hien_tai >= mang.size()) {
        return "";
    }

    if (so_luong_nho_nhat == 0) {
        return "()";
    }

    int so_luong_con_lai = so_luong_nho_nhat;
    vector<string> ngoac_con;
    
    while (so_luong_con_lai > 0) {
        vi_tri_hien_tai++;
        string ngoac_da_giai_ma = giai_ma_ngoac_don(mang);
        so_luong_con_lai -= ngoac_da_giai_ma.length() / 2;
        ngoac_con.push_back(ngoac_da_giai_ma);
    }

    string ket_qua = "(";
    
    for (int j = 0; j < ngoac_con.size(); j++) {
        ket_qua += ngoac_con[j];
    }

    ket_qua += ")";
    return ket_qua;
}

int main() {
    int n; cin>> n;
    vector<int> mang_ngoac(n);
    vector<string> ket_qua_giai_ma;
    for(int j = 0; j < n; j++) cin>> mang_ngoac[j];
    while (vi_tri_hien_tai < mang_ngoac.size()) {
        ket_qua_giai_ma.push_back(giai_ma_ngoac_don(mang_ngoac));
        vi_tri_hien_tai++;
    }

    string ket_qua_cuoi_cung;
    
    for (int j = 0; j < ket_qua_giai_ma.size();j++) {
        ket_qua_cuoi_cung += ket_qua_giai_ma[j];
    }

    cout << ket_qua_cuoi_cung << endl;
    return 0;
}
