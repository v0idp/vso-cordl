#pragma once
// IWYU pragma private; include "GlobalNamespace/SymbolsKeyBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SymbolsKeyBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__Key_def.hpp"
#include "GlobalNamespace/zzzz__ShiftKeyBehaviour_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SymbolsKeyBehaviour.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SymbolsKeyBehaviour::*)()>(&::GlobalNamespace::SymbolsKeyBehaviour::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x16bae78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolsKeyBehaviour*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SymbolsKeyBehaviour.SpecialKeyPressed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SymbolsKeyBehaviour::*)(::GlobalNamespace::Key*)>(&::GlobalNamespace::SymbolsKeyBehaviour::SpecialKeyPressed)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x16baf94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolsKeyBehaviour*>::get(),
                        "SpecialKeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Key*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SymbolsKeyBehaviour.OnDisable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SymbolsKeyBehaviour::*)()>(&::GlobalNamespace::SymbolsKeyBehaviour::OnDisable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x16bb010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolsKeyBehaviour*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SymbolsKeyBehaviour._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SymbolsKeyBehaviour::*)()>(&::GlobalNamespace::SymbolsKeyBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x16bb108;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolsKeyBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ShiftKeyBehaviour>& GlobalNamespace::SymbolsKeyBehaviour::__cordl_internal_get_ShiftBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShiftBehaviour;
}
constexpr ::UnityW<::GlobalNamespace::ShiftKeyBehaviour> const& GlobalNamespace::SymbolsKeyBehaviour::__cordl_internal_get_ShiftBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShiftBehaviour;
}
constexpr void GlobalNamespace::SymbolsKeyBehaviour::__cordl_internal_set_ShiftBehaviour(::UnityW<::GlobalNamespace::ShiftKeyBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ShiftBehaviour)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::Key>& GlobalNamespace::SymbolsKeyBehaviour::__cordl_internal_get_symbolKeyController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symbolKeyController;
}
constexpr ::UnityW<::GlobalNamespace::Key> const& GlobalNamespace::SymbolsKeyBehaviour::__cordl_internal_get_symbolKeyController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symbolKeyController;
}
constexpr void GlobalNamespace::SymbolsKeyBehaviour::__cordl_internal_set_symbolKeyController(::UnityW<::GlobalNamespace::Key>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___symbolKeyController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SymbolsKeyBehaviour::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolsKeyBehaviour*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SymbolsKeyBehaviour::SpecialKeyPressed(::GlobalNamespace::Key*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolsKeyBehaviour*>::get(),
                        "SpecialKeyPressed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Key*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void GlobalNamespace::SymbolsKeyBehaviour::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolsKeyBehaviour*>::get(),
                        "OnDisable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::SymbolsKeyBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SymbolsKeyBehaviour*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SymbolsKeyBehaviour* GlobalNamespace::SymbolsKeyBehaviour::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::SymbolsKeyBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SymbolsKeyBehaviour::SymbolsKeyBehaviour()   {
}
