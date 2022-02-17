#include <stdio.h>


int main() {
  double t1, v1, t2, v2, t3, v3, s1, s2, s3, s;
  scanf("%lf %lf %lf %lf %lf %lf", &t1, &v1, &t2, &v2, &t3, &v3);
  s1 = v1*t1;
  s2 = v2*t2;
  s3 = v3*t3;
  s = (s1+s2+s3)/2; /*s je duzina polovine puta*/
  if(s<s1) printf("%.3lf\n", s/v1);
  else
  	if(s==s1) printf("%.3lf\n", t1);
  	else
  		if(s<s1+s2) printf("%.3lf\n", t1 + (s-s1)/v2);
  		else
  			if(s==s1+s2) printf("%.3lf\n", t1 + t2);
  			else printf("%.3lf\n", t1 + t2 + (s-s1-s2)/v3);
  return 0;
}
/*razdojio sam s<s1 i s==s1 iz slucaja s<=s1 zbog nepreciznosti u radu sa realnim brojevima
slicno tome i s<s1+s2 i s==s1+s2*/
