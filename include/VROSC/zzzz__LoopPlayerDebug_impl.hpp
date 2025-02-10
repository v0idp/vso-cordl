#pragma once
// IWYU pragma private; include "VROSC/LoopPlayerDebug.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__LoopPlayerDebug_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "VROSC/zzzz__LoopPlayer_def.hpp"
//  Writing Method size for method: ::VROSC::LoopPlayerDebug.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerDebug::*)()>(&::VROSC::LoopPlayerDebug::Update)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x18a16f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerDebug*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopPlayerDebug._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::LoopPlayerDebug::*)()>(&::VROSC::LoopPlayerDebug::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x18a18f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerDebug*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::VROSC::LoopPlayer>& VROSC::LoopPlayerDebug::__cordl_internal_get__loopPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayer;
}
constexpr ::UnityW<::VROSC::LoopPlayer> const& VROSC::LoopPlayerDebug::__cordl_internal_get__loopPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopPlayer;
}
constexpr void VROSC::LoopPlayerDebug::__cordl_internal_set__loopPlayer(::UnityW<::VROSC::LoopPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loopPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::TMPro::TextMeshPro>& VROSC::LoopPlayerDebug::__cordl_internal_get__text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& VROSC::LoopPlayerDebug::__cordl_internal_get__text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____text;
}
constexpr void VROSC::LoopPlayerDebug::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::LoopPlayerDebug::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerDebug*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::LoopPlayerDebug::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopPlayerDebug*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::LoopPlayerDebug* VROSC::LoopPlayerDebug::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::LoopPlayerDebug*>());
}
// Ctor Parameters []
constexpr ::VROSC::LoopPlayerDebug::LoopPlayerDebug()   {
}
