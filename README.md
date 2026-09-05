# Smart Rescue Buoy — Kelompok 45

Repository resmi proyek **Smart Rescue Buoy Berbasis IoT dengan GPS Tracking dan Remote Control** untuk tugas Capstone Project Desain Proyek 2 (Despro 2), Departemen Teknik Elektro UI.

---

### Tim Kami (Kelompok 45)
* **Dosen Pembimbing:** Dr. Faiz Husnayain, S.T., M.T., M.Sc., Ph.D.[cite: 1]
* **Ketua:** Naira Raissa Hulaemi (2306156675)[cite: 1]
* **Anggota:**
  * Hafizhah Azkah (2306247401)[cite: 1]
  * Kayla Annisa (2306247515)[cite: 1]
  * Feyza Hasna Shabrina (2306266691)[cite: 1]
  * Neyla Shakira (2306250655)[cite: 1]

---

### Overview Singkat
Proyek ini bikin prototipe pelampung penyelamat mandiri yang bisa digerakkan jarak jauh (*remote control*) pakai motor DC RS-775 dan dipantau koordinat lokasinya secara *real-time* via GPS & LoRa 915 MHz. Data koordinat dari pelampung bakal diteruskan ke web dashboard biar posisi pelampung bisa dipantau langsung dari darat[cite: 1].

---

### Struktur Folder
Biar pengembangannya rapi, file di repo ini dibagi jadi beberapa bagian:
* `firmware/` : Kode program Arduino/C++ untuk mikrokontroler pelampung (LILYGO T-Beam ESP32 & Driver BTS7960).
* `ground-station/` : Program penerima sinyal LoRa di pos pemantau darat.
* `web-dashboard/` : Kode tampilan web monitoring (peta lokasi & virtual joystick).
* `docs/` : Laporan mingguan, skema rangkaian, dan dokumen pendukung proyek.

---

### Hardware yang Dipakai
* **Board Utama:** LILYGO T-Beam v1.2 (ESP32, LoRa SX1276 915 MHz, GPS NEO-6M, PMU AXP2101)
* **Motor & Driver:** 2x Dinamo RS-775 + Driver BTS7960 43A
* **Baterai:** Vant LiPo 3S 5200 mAh 50C
* **Komponen Lain:** Step-down USB, sakelar waterproof, kabel AWG

---

### Catatan Setup & Development
1. Clone repo:
   ```bash
   git clone [https://github.com/neylashakiraaa/Smart-Rescue-Buoy-Kelompok45.git](https://github.com/neylashakiraaa/Smart-Rescue-Buoy-Kelompok45.git)