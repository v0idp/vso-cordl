#pragma once
// IWYU pragma private; include "VROSC/DisableColldiersBehaviour.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "VROSC/zzzz__DisableColldiersBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::VROSC::DisableColldiersBehaviour.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DisableColldiersBehaviour::*)(::UnityEngine::GameObject*)>(&::VROSC::DisableColldiersBehaviour::Setup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x176865c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisableColldiersBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DisableColldiersBehaviour.ProcessFrame
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DisableColldiersBehaviour::*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*)>(&::VROSC::DisableColldiersBehaviour::ProcessFrame)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x1768758;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisableColldiersBehaviour*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisableColldiersBehaviour*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::DisableColldiersBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::DisableColldiersBehaviour::*)()>(&::VROSC::DisableColldiersBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17688a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisableColldiersBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& VROSC::DisableColldiersBehaviour::__cordl_internal_get_Disable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Disable;
}
constexpr bool const& VROSC::DisableColldiersBehaviour::__cordl_internal_get_Disable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Disable;
}
constexpr void VROSC::DisableColldiersBehaviour::__cordl_internal_set_Disable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Disable = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& VROSC::DisableColldiersBehaviour::__cordl_internal_get__root()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& VROSC::DisableColldiersBehaviour::__cordl_internal_get__root() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____root;
}
constexpr void VROSC::DisableColldiersBehaviour::__cordl_internal_set__root(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____root)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>& VROSC::DisableColldiersBehaviour::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*> const& VROSC::DisableColldiersBehaviour::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void VROSC::DisableColldiersBehaviour::__cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>,::Array<::UnityW<::UnityEngine::Collider>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<bool,::Array<bool>*>& VROSC::DisableColldiersBehaviour::__cordl_internal_get__activeAtStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeAtStart;
}
constexpr ::ArrayW<bool,::Array<bool>*> const& VROSC::DisableColldiersBehaviour::__cordl_internal_get__activeAtStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeAtStart;
}
constexpr void VROSC::DisableColldiersBehaviour::__cordl_internal_set__activeAtStart(::ArrayW<bool,::Array<bool>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activeAtStart)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::DisableColldiersBehaviour::Setup(::UnityEngine::GameObject*  root)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisableColldiersBehaviour*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, root);
}
inline void VROSC::DisableColldiersBehaviour::ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisableColldiersBehaviour*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info, playerData);
}
inline void VROSC::DisableColldiersBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::DisableColldiersBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::DisableColldiersBehaviour* VROSC::DisableColldiersBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::DisableColldiersBehaviour*>());
}
// Ctor Parameters []
constexpr ::VROSC::DisableColldiersBehaviour::DisableColldiersBehaviour()   {
}
