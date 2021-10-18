namespace noaa
{
    namespace mhs
    {
        namespace calibration
        {
            const double f[5][4] = {
                    {26.47922, 2.381473, 7.897082E-04, 6.277443E-07},
                    {25.72883, 2.401215, 6.160758E-04, 1.114127E-06},
                    {26.75906, 2.375112, 8.306877E-04, 5.707352E-07},
                    {25.80272, 2.401580, 5.882624E-04, 1.307091E-06},
                    {26.78935, 2.370714, 9.064551E-04, 2.251251E-05}};
            const double RCAL[3] = {117.988, 95.289, 80.602};
            const double g[5] = {355.9982, -0.239278, -4.85712E-03, 3.59838E-05, -8.02652E-08};
            const double u_temps[3] = {275.28, 288.00, 299.45};
            const double u[3][5] = {
                    {1.709693E-02, 5.452098E-02, 3.468686E-02, 2.263756E-02, 7.784018E-03},
                    {1.068579E-01, 8.246891E-02, 5.056471E-02, 2.977869E-02, 2.917676E-02},
                    {1.914666E-01, 1.071100E-01, 4.829732E-02, 4.355207E-02, 3.218666E-02}};
            const double ch19_corr[2] = {-0.0031, 1.00027};
            const double wavenumber[5] = {2.968720, 5.236956, 6.114597, 6.114597, 6.348092};
            const double W[5] = {1, 1, 1, 1, 2};
            const double Ts[5] = {-1.5, 10, 39, 48, 20};
            const double To[5] = {0.1, 66, 205, 70, 67};
        }
    }
}