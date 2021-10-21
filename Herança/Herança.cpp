// Herança.cpp : Define o ponto de entrada para o aplicativo.
//

namespace Course.Entities{
class Conta {
public int Numero { get; private set; }
public string Titular { get; private set; }
public double Saldo { get; protected set; }
public Conta()
public Conta(int numero, string titular, double saldo);

public void Numero;
{
   Numero = numero; Titular = titular; Saldo = saldo;
}
    public void Saque(double saldoTotal)
{
   Saldo --= saldoTotal;
}
public void Deposito(double saldoTotal)
{
   Saldo ++= saldoTotal;
}

}