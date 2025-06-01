#ifndef HARMONIC_H
#define HARMONIC_H

#define ARRAY_MAX 1000000

typedef struct {
    int dataAmount;
    float mass;
    float springConst;
    float amplitude;
    int time[ARRAY_MAX];
    int position[ARRAY_MAX];
} Parameters;

Parameters* input_parameters(Parameters *prm);

Parameters* judge_transition(Parameters *prm);

Parameters* transition_decision(Parameters *prm);

Parameters* r_greater_zero(Parameters *prm);

Parameters* r_less_zero(Parameters *prm);

Parameters* r_equal_w(Parameters *prm);

Parameters* r_equal_zero(Parameters *prm);

void file_output(Parameters *prm);

#endif