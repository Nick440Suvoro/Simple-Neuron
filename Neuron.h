#pragma once

// ������������ ������� ���������
enum Func
{
	TANH = 1, // ��������������� �������
	RELU = 2, // RELU
	SIGM = 3  // ��������
};

class Neuron
{
public:
	// ������������
	Neuron(float value); 
	Neuron(float value, Func activation);

	void setValue(float value) { this->value = value; }; // ������ �������� ��������
	void activate(); // ���������
	void derive(); // �������� ��������
	void output(); // ����� �������� � �������
	void compute(); // ��������� ��������

	// �������
	float getValue() { return this->value; }
	float getActivateValue() { return this->activatedValue; }
	float getDerivedValue() { return this->derivedValue; }

private:
	float value;
	float activatedValue;
	float derivedValue;
	Func type = Func::SIGM;
};