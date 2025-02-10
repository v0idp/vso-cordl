#pragma once
// IWYU pragma private; include "VROSC/TextDisplay.hpp"
#include "VROSC/zzzz__Node_impl.hpp"
#include "VROSC/zzzz__TextDisplay_def.hpp"
#include "UnityEngine/zzzz__TextMesh_def.hpp"
//  Writing Method size for method: ::VROSC::TextDisplay.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextDisplay::*)()>(&::VROSC::TextDisplay::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1726118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextDisplay*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextDisplay.InitDisplay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextDisplay::*)()>(&::VROSC::TextDisplay::InitDisplay)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1725d44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextDisplay*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextDisplay*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextDisplay.UpdateDisplay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextDisplay::*)(::StringW)>(&::VROSC::TextDisplay::UpdateDisplay)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x1725e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextDisplay*>::get(),
                        "UpdateDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::TextDisplay._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::TextDisplay::*)()>(&::VROSC::TextDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1725fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextDisplay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TextMesh>& VROSC::TextDisplay::__cordl_internal_get__textMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr ::UnityW<::UnityEngine::TextMesh> const& VROSC::TextDisplay::__cordl_internal_get__textMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textMesh;
}
constexpr void VROSC::TextDisplay::__cordl_internal_set__textMesh(::UnityW<::UnityEngine::TextMesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textMesh)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VROSC::TextDisplay::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextDisplay*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TextDisplay::InitDisplay()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextDisplay*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::TextDisplay::UpdateDisplay(::StringW  newText)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextDisplay*>::get(),
                        "UpdateDisplay",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newText);
}
inline void VROSC::TextDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::TextDisplay*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::TextDisplay* VROSC::TextDisplay::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::TextDisplay*>());
}
// Ctor Parameters []
constexpr ::VROSC::TextDisplay::TextDisplay()   {
}
