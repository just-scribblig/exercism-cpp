#include <string>
#include <vector>

namespace election {

struct ElectionResult {
    std::string name{};
    int votes{};
};
 int vote_count(ElectionResult& x){
    return x.votes;
}
    void increment_vote_count(ElectionResult& x, int y){
        x.votes += y;
    }

    ElectionResult& determine_result(std::vector<ElectionResult>& final_count){
        int max = 0;
        int max_index = 0;
        for (int i=0; i<final_count.size(); i++){
            if (final_count[i].votes > max){
                max_index = i;
                max = final_count[max_index].votes;
            }
        }
        final_count[max_index].name = "President " + final_count[max_index].name;
        return final_count[max_index];
    }
}
