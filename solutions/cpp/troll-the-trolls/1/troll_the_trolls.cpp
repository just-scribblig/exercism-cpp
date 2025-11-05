namespace hellmath {
    enum AccountStatus{
        troll,
        guest,
        user,
        mod
    };
    enum Action{
        read,
        write,
        remove
    };
    bool display_post(AccountStatus x, AccountStatus y){
        return ((x==AccountStatus::troll && y==AccountStatus::troll) || x!=AccountStatus::troll);
    }
    bool permission_check(Action a, AccountStatus b){
        if ((b==AccountStatus::troll || b==AccountStatus::user) && (a==Action::read || a==Action::write)) return true;
        else if (b==AccountStatus::guest && a==Action::read) return true;
        else if (b==AccountStatus::mod) return true;
        else return false;
    }
    bool valid_player_combination(AccountStatus a, AccountStatus b){
        if (a==AccountStatus::mod){
            if (b==AccountStatus::mod || b==AccountStatus::user) return true;
            return false;
        } else if (a==AccountStatus::user) {
            if (b==AccountStatus::mod || b==AccountStatus::user) return true;
            return false;
        } else if (a==AccountStatus::troll) {
              if (b==AccountStatus::troll) return true;
              return false;
          } else return false;
    }
    bool has_priority(AccountStatus a, AccountStatus b){
        return a>b;
    }
}
