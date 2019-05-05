#include <iostream>
#include <stdlib.h>

using namespace::std;
main()
{

    string nama_ident[5]={"Bayu","Irvan","Susiati","Diana","Roni"},no_ident[5]={"A001","A002","A003","A004","A005"};
    string kartu,cari,nabar[10],tump,nama_depan,nama_belakang;
    int ketemu=0,habar[10],jubar[10],tampung[10],total_biaya=0,jmlh,temp;
    double diskon,total_harga,kembalian,tunai;
    bool keadaan=0;


    cout<<"---- S E L A M A T --- D A T A N G --- D I T O K O --- P A K U C U P -----"<<endl<<endl;
    cout<<"Apakah Anda Mempunyai Kartu Member? (Ya/Tidak) = ";
    cin>>kartu;
    if(kartu=="Ya")
    {
        cout<<"\nMasukkan Nomor Identitas Dicari = ";
        cin>>cari;
        for(int r = 0; r<=5; r++)
        {
            if (cari == no_ident[r])
            {
                keadaan=true;
                keadaan++;
                if(keadaan==1)
                {
                    cout << "\nNomor Identitas = "<<cari<<" Dengan Nama = " <<nama_ident[r]<<endl;
                    ketemu=1;
                }
            }
        }
        if (ketemu == 0) cout << "Maaf Data Yang Anda Cari Tidak Ditemukan!";
        cout<<"\nBerapa Macam Jumlah Barang = ";
        cin>>jmlh;
        for(int a=1; a<=jmlh; a++)
        {
            cout<<"Barang Ke-"<<a<<endl;
            cout<<"Nama Barang = ";
            cin>>nabar[a];
            cout<<"Harga Barang = Rp.";
            cin>>habar[a];
            cout<<"Jumlah Barang = ";
            cin>>jubar[a];
            cout<<endl;
            tampung[a]=habar[a]*jubar[a];
            total_biaya=total_biaya+tampung[a];
        }
        for(int i=jmlh-1;i>=0;i--)
            {
                for(int h=1;h<=i;h++)
                {
                  if(habar[h]>habar[h+1])
                  {
                    temp=habar[h];
                    habar[h]=habar[h+1];
                    habar[h+1]=temp;
                  }
                }
            }
            for(int i=1;i<=jmlh;i++)
            {
                cout<<"\nTotal Harga Barang Ke-"<<i<<" = Rp."<<habar[i];
            }
            diskon=total_biaya*0.05;
            cout<<"\nAnda Mendapatkan Diskon Sebesar = Rp."<<diskon;
            total_harga=total_biaya-diskon;
            cout<<"\n============================================"<<endl;
            cout<<"\nTotal Harga = Rp."<<total_harga;
            cout<<"\nTunai       = Rp.";
            cin>>tunai;
            kembalian=tunai-total_harga;
            cout<<"\n============================================"<<endl;
            cout<<"\nKembalian     = Rp."<<kembalian;
    }
    else if(kartu=="Tidak")
    {
        cout<<"\nNama Lengkap : ";cin>>nama_depan>>nama_belakang;
        cout<<"\nBerapa Macam Jumlah Barang = ";
        cin>>jmlh;
        for(int a=1; a<=jmlh; a++)
        {
            cout<<"Barang Ke-"<<a<<endl;
            cout<<"Nama Barang = ";
            cin>>nabar[a];
            cout<<"Harga Barang = Rp.";
            cin>>habar[a];
            cout<<"Jumlah Barang = ";
            cin>>jubar[a];
            cout<<endl;
            tampung[a]=habar[a]*jubar[a];
            total_biaya=total_biaya+tampung[a];
        }
            for(int i=jmlh-1;i>=0;i--)
            {
                for(int h=1;h<=i;h++)
                {
                  if(habar[h]>habar[h+1])
                  {
                    temp=habar[h];
                    habar[h]=habar[h+1];
                    habar[h+1]=temp;
                  }
                }
            }
            for(int i=1;i<=jmlh;i++)
            {
                cout<<"\nTotal Harga Barang Ke-"<<i<<" = Rp."<<habar[i];
            }
            cout<<"\n============================================"<<endl;
            cout<<"\nTotal Harga = Rp."<<total_biaya;
            cout<<"\nTunai       = Rp.";
            cin>>tunai;
            kembalian=tunai-total_biaya;
            cout<<"\n============================================"<<endl;
            cout<<"\nKembalian     = Rp."<<kembalian;
    }
}
