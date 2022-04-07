#include<stdio.h>
int main(){
	int n, y_prev, m_prev, d_prev, y_curr, m_curr, d_curr;
	scanf("%i %i %i %i", &n, &d_prev, &m_prev, &y_prev);
	for(int i=1; i<n; i++){
		scanf("%i %i %i", &d_curr, &m_curr, &y_curr);
		if(y_curr < y_prev) {printf("NE\n"); return 0;}
		if(y_curr == y_prev){
			if (m_curr < m_prev) {printf("NE\n"); return 0;}
			else if(m_curr == m_prev && d_curr < d_prev) {printf("NE\n"); return 0;}
		}
		y_prev = y_curr;
		m_prev = m_curr;
		d_prev = d_curr;		
	}
	printf("DA\n");
}
