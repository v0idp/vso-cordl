#pragma once
// IWYU pragma private; include "Unity/Services/Core/Internal/Serialization/IJsonSerializer.hpp"
#include "Unity/Services/Core/Internal/Serialization/zzzz__IJsonSerializer_def.hpp"
template<typename T>
inline T Unity::Services::Core::Internal::Serialization::IJsonSerializer::DeserializeObject(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Core::Internal::Serialization::IJsonSerializer*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, value);
}
