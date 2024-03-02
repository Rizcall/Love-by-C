#include <iostream>

using namespace std;

int main()
{
    # Input golongan dan jam lembur
golongan = input("Masukkan golongan karyawan (A/B/C): ").upper()
jam_lembur = int(input("Masukkan jumlah jam lembur: "))

# Inisialisasi gaji pokok berdasarkan golongan
if golongan == 'A':
    gaji_pokok = 5000000
elif golongan == 'B':
    gaji_pokok = 6500000
elif golongan == 'C':
    gaji_pokok = 9500000
else:
    print("Golongan tidak valid.")
    exit()

# Hitung gaji lembur berdasarkan jam lembur
if jam_lembur == 1:
    gaji_lembur = 0.3 * gaji_pokok
elif jam_lembur == 2:
    gaji_lembur = 0.32 * gaji_pokok
elif jam_lembur == 3:
    gaji_lembur = 0.34 * gaji_pokok
elif jam_lembur == 4:
    gaji_lembur = 0.36 * gaji_pokok
elif jam_lembur >= 5:
    gaji_lembur = 0.38 * gaji_pokok
else:
    gaji_lembur = 0

# Hitung total penghasilan
total_penghasilan = gaji_pokok + gaji_lembur

# Output hasil
print(f"\nGaji Pokok Golongan {golongan}: Rp. {gaji_pokok:,}")
print(f"Gaji Lembur ({jam_lembur} Jam): Rp. {gaji_lembur:,}")
print(f"Jumlah Penghasilan: Rp. {total_penghasilan:,}")

    return 0;
}
