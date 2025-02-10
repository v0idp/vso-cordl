#pragma once
// IWYU pragma private; include "System/Converter_2.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TInput,typename TOutput>
inline void System::Converter_2<TInput,TOutput>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Converter_2<TInput,TOutput>*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
template<typename TInput,typename TOutput>
inline TOutput System::Converter_2<TInput,TOutput>::Invoke(TInput  input)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Converter_2<TInput,TOutput>*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<TOutput, false>(this, ___internal_method, input);
}
template<typename TInput,typename TOutput>
inline ::System::Converter_2<TInput,TOutput>* System::Converter_2<TInput,TOutput>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Converter_2<TInput,TOutput>*>(object, method));
}
// Ctor Parameters []
template<typename TInput,typename TOutput>
constexpr ::System::Converter_2<TInput,TOutput>::Converter_2()   {
}
