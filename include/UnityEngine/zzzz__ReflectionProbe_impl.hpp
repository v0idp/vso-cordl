#pragma once
// IWYU pragma private; include "UnityEngine/ReflectionProbe.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__ReflectionProbe_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__ReflectionProbe_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::ReflectionProbe_ReflectionProbeEvent::ReflectionProbe_ReflectionProbeEvent(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ReflectionProbe_ReflectionProbeEvent::ReflectionProbe_ReflectionProbeEvent()   {
}
constexpr ::UnityEngine::ReflectionProbe_ReflectionProbeEvent  UnityEngine::ReflectionProbe_ReflectionProbeEvent::ReflectionProbeAdded{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ReflectionProbe_ReflectionProbeEvent  UnityEngine::ReflectionProbe_ReflectionProbeEvent::ReflectionProbeRemoved{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallReflectionProbeEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ReflectionProbe*, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent)>(&::UnityEngine::ReflectionProbe::CallReflectionProbeEvent)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2f60eec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get(),
                        "CallReflectionProbeEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ReflectionProbe*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ReflectionProbe_ReflectionProbeEvent>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallSetDefaultReflection
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture*)>(&::UnityEngine::ReflectionProbe::CallSetDefaultReflection)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2f60f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get(),
                        "CallSetDefaultReflection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ReflectionProbe::setStaticF_reflectionProbeChanged(::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*, "reflectionProbeChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>(std::forward<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*>(value));
}
inline ::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>* UnityEngine::ReflectionProbe::getStaticF_reflectionProbeChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityW<::UnityEngine::ReflectionProbe>,::UnityEngine::ReflectionProbe_ReflectionProbeEvent>*, "reflectionProbeChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>();
}
inline void UnityEngine::ReflectionProbe::setStaticF_registeredDefaultReflectionSetActions(::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionSetActions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* UnityEngine::ReflectionProbe::getStaticF_registeredDefaultReflectionSetActions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionSetActions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>();
}
inline void UnityEngine::ReflectionProbe::setStaticF_registeredDefaultReflectionTextureActions(::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionTextureActions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>(std::forward<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>* UnityEngine::ReflectionProbe::getStaticF_registeredDefaultReflectionTextureActions()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Action_1<::UnityW<::UnityEngine::Texture>>*>*, "registeredDefaultReflectionTextureActions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get>();
}
inline void UnityEngine::ReflectionProbe::CallReflectionProbeEvent(::UnityEngine::ReflectionProbe*  probe, ::UnityEngine::ReflectionProbe_ReflectionProbeEvent  probeEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get(),
                        "CallReflectionProbeEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ReflectionProbe*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ReflectionProbe_ReflectionProbeEvent>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, probe, probeEvent);
}
inline void UnityEngine::ReflectionProbe::CallSetDefaultReflection(::UnityEngine::Texture*  defaultReflectionCubemap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe*>::get(),
                        "CallSetDefaultReflection",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, defaultReflectionCubemap);
}
// Ctor Parameters []
constexpr ::UnityEngine::ReflectionProbe::ReflectionProbe()   {
}
