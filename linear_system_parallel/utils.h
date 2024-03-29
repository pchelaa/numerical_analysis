#define EPS 1e-10


double* getel(double* A, int n, int row, int col);
void print_solution(double* x, int n, int m);
void print_error(double* A, int n, double* b, double* x);
void print_system(double* A, double* b, int n);
void print_solution_error(double* x, int n);
int is_zero(double x, double A_norm);
double matr_norm(double* A, int n);
void synchronize(int total_threads);
double get_time(void);
