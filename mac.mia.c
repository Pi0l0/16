#define maytomen(v,n) { int i,j,aux ; \
						for(i = 0 ; i < n -1 ; i++)\
							for(j = 0 ; j < n -i-1 ; j++)\
							if(v[j] < v[j+1]){ \
								aux = v[j]; \
								v[j] = v[j+1]; \
								v[j+1] = aux; \
							}\
					}

#define mentomay(v,n) { int i,j,aux ; \
						for(i = 0 ; i < n -1 ; i++)\
							for(j = 0 ; j < n -i-1 ; j++)\
							if(v[j] > v[j+1]){ \
								aux = v[j]; \
								v[j] = v[j+1]; \
								v[j+1] = aux; \
							}\
					}
