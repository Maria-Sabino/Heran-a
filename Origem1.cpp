
namespace Course.Entities{
class ContaJuridica : Conta {
public double EmprestimoLimite { get; set; }
public ContaJuridica() { }
public ContaJuridica
public int numero, string titular, double saldo, double emprestimoLimite)
: public base(numero, titular, saldo)
{
EmprestimoLimite = emprestimoLimite;
}
public void Emprestimo(double saldoTotal) {
   if (saldoTotal <= EmprestimoLimite)
{
Saldo += saldoTotal;
}