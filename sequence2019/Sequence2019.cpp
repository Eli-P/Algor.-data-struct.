#include "Sequence2019.h"

main_savitch_3::sequence::sequence() {
    current_index = -1;
    used = 0;
    data[CAPACITY];
}

void main_savitch_3::sequence::start() {
    if (used > 0){
        current_index = 0;
    } else {
        current_index = -1;
    }
}

void main_savitch_3::sequence::advance() {
    if (is_item()){
        if (current_index == used-1){
            current_index = -1;
        } else {
            current_index++;
        }
    }
}

bool main_savitch_3::sequence::is_item() const {
    return !(used == 0 || current_index == -1);

}

void main_savitch_3::sequence::remove_current() {

    for (int i = current_index; i < int(used); i++){
        data[i] = data[i+1];
    }
    used -= 1;
}

main_savitch_3::sequence::size_type main_savitch_3::sequence::size() const {
    return used;
}

void main_savitch_3::sequence::insert(const main_savitch_3::sequence::value_type &entry) {
    if(is_item()) {
        if (current_index < CAPACITY) {
            //current_index = used;
            for (int i = int(used-1); i >= int(current_index); i--) {
                data[i + 1] = data[i];
            }
            data[current_index] = entry;
            used += 1;

        }
    } else{
        for (int i = int(used-1); i >= int(0); i--) {
            data[i + 1] = data[i];
        }
        data[0] = entry;
        current_index = 0;
        used ++;
    }
    //data[current_index];
}

main_savitch_3::sequence::value_type main_savitch_3::sequence::current() const {
    if (is_item()){
        return data[current_index];
    }

}
//     Precondition: size( ) < CAPACITY.
//     Post condition: A new copy of entry has been inserted in the sequence after
//     the current item. If there was no current item, then the new entry has
//     been attached to the end of the sequence. In either case, the newly
//     inserted item is now the current item of the sequence.

void main_savitch_3::sequence::attach(const main_savitch_3::sequence::value_type &entry) {
    if (size() < CAPACITY){
        int i;
        if(!is_item()){ // No current item
            data[used] = entry;
            current_index = used;
            used += 1;
        } else { // has current item
            //current_index = used;
            for (i = used-1; i > current_index; i--) {
                data[i+1] = data[i];
            }
            data[current_index+1] = entry;
            current_index = current_index+1;
            used += 1;
        }
    }
}




