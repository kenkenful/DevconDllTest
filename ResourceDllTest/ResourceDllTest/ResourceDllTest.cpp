// ResourceDllTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include <windows.h>
#include <iostream>


#define IDS_ENABLED         3000
#define IDS_ENABLED_REBOOT  3001
#define IDS_ENABLE_FAILED   3002
#define IDS_DISABLED        3003
#define IDS_DISABLED_REBOOT 3004
#define IDS_DISABLE_FAILED  3005
#define IDS_RESTARTED       3006
#define IDS_REQUIRES_REBOOT 3007
#define IDS_RESTART_FAILED  3008
#define IDS_REMOVED         3009
#define IDS_REMOVED_REBOOT  3010
#define IDS_REMOVE_FAILED   3011


int main()
{
    char szExeName[] = "devcon.dll"; //dllの名前
    TCHAR strEnable[80];
    TCHAR strReboot[80];
    TCHAR strFail[80];
    
    HINSTANCE hDllInst; //dllのインスタンス
    hDllInst = (HINSTANCE)LoadLibrary(szExeName);


    if (!LoadString(hDllInst, IDS_RESTART_FAILED, strEnable, ARRAYSIZE(strEnable))) {
        printf("failure\n");
        return 1;
    }

    printf("%s\n", strEnable);


    FreeLibrary(hDllInst);
    getchar();
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
