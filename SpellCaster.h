class SpellCaster : public Unit, public iMagicDamage {
protected:
    int mDamage;
    int magicMana;
public:
    SpellCaster();

    ~SpellCaster() = default;
}