#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float so_buoi_tham_gia;
    float tong_so_buoi_hoc;
    float chuyen_can;

    printf("Nhap so buoi hoc tham gia: ");
    scanf("%f", &so_buoi_tham_gia);
    printf("Nhap tong so buoi hoc: ");
    scanf("%f", &tong_so_buoi_hoc);
    chuyen_can = (so_buoi_tham_gia / tong_so_buoi_hoc) * 100 ;

    if  (chuyen_can >= 75 ) {
        float li_thuyet, thuc_hanh, bai_tap;
        float dk_li_thuyet, dk_thuc_hanh, dk_bai_tap;
        printf("nhap lan luot 3 diem: li thuyet, thuc hanh , bai tap : ");
        scanf("%f %f %f", &li_thuyet, &thuc_hanh, &bai_tap);
        dk_li_thuyet = (li_thuyet / 20) * 100 ;
        dk_thuc_hanh = (thuc_hanh / 15) * 100;
        dk_bai_tap = (bai_tap / 10) * 100;

        if ( dk_bai_tap >= 40 && dk_li_thuyet >= 40 && dk_thuc_hanh >= 40) {
            printf("Ban da dau");
        } else {
            if (dk_bai_tap < 40) printf("ban da truot phan thi bai tap\n");
            if (dk_li_thuyet < 40) printf("ban da truot phan thi li thuyet\n");
            if (dk_thuc_hanh < 40) printf("ban da truot phan thi thuc hanh\n");
        }
    } else {
        printf("ban da khong du dieu kien du thi");
    }
    return 0;
}
