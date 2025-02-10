#pragma once
// IWYU pragma private; include "DG/Tweening/Plugins/Core/IPlugSetter_4.hpp"
#include "DG/Tweening/Plugins/Core/zzzz__IPlugSetter_4_def.hpp"
#include "DG/Tweening/Core/zzzz__DOGetter_1_def.hpp"
#include "DG/Tweening/Core/zzzz__DOSetter_1_def.hpp"
template<typename T1,typename T2,typename TPlugin,typename TPlugOptions>
inline ::DG::Tweening::Core::DOGetter_1<T1>* DG::Tweening::Plugins::Core::IPlugSetter_4<T1,T2,TPlugin,TPlugOptions>::Getter()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::IPlugSetter_4<T1,T2,TPlugin,TPlugOptions>*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::DOGetter_1<T1>*, false>(this, ___internal_method);
}
template<typename T1,typename T2,typename TPlugin,typename TPlugOptions>
inline ::DG::Tweening::Core::DOSetter_1<T1>* DG::Tweening::Plugins::Core::IPlugSetter_4<T1,T2,TPlugin,TPlugOptions>::Setter()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::IPlugSetter_4<T1,T2,TPlugin,TPlugOptions>*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<::DG::Tweening::Core::DOSetter_1<T1>*, false>(this, ___internal_method);
}
template<typename T1,typename T2,typename TPlugin,typename TPlugOptions>
inline T2 DG::Tweening::Plugins::Core::IPlugSetter_4<T1,T2,TPlugin,TPlugOptions>::EndValue()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::IPlugSetter_4<T1,T2,TPlugin,TPlugOptions>*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<T2, false>(this, ___internal_method);
}
template<typename T1,typename T2,typename TPlugin,typename TPlugOptions>
inline TPlugOptions DG::Tweening::Plugins::Core::IPlugSetter_4<T1,T2,TPlugin,TPlugOptions>::GetOptions()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::DG::Tweening::Plugins::Core::IPlugSetter_4<T1,T2,TPlugin,TPlugOptions>*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<TPlugOptions, false>(this, ___internal_method);
}
