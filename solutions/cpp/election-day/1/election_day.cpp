#include <string>
#include <vector>

namespace election {

struct ElectionResult {
    std::string name{};
    int votes{};
};

// TODO: Task 1
// vote_count takes a reference to an `ElectionResult` as an argument and will
// return the number of votes in the `ElectionResult.
 int vote_count(ElectionResult& x){
    return x.votes;
}

// TODO: Task 2
// increment_vote_count takes a reference to an `ElectionResult` as an argument
// and a number of votes (int), and will increment the `ElectionResult` by that
// number of votes.
    void increment_vote_count(ElectionResult& x, int y){
        x.votes += y;
    }
// TODO: Task 3
// determine_result receives the reference to a final_count and returns a
// reference to the `ElectionResult` of the new president. It also changes the
// name of the winner by prefixing it with "President". The final count is given
// in the form of a `reference` to `std::vector<ElectionResult>`, a vector with
// `ElectionResults` of all the participating candidates.
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

}  // namespace election
