#pragma once
// IWYU pragma private; include "System/IProgress_1.hpp"
#include "System/zzzz__IProgress_1_def.hpp"
template<typename T>
inline void System::IProgress_1<T>::Report(T  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IProgress_1<T>*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
