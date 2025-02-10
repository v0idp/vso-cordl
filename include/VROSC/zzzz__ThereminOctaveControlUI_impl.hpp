#pragma once
// IWYU pragma private; include "VROSC/ThereminOctaveControlUI.hpp"
#include "VROSC/zzzz__OctaveControlUI_impl.hpp"
#include "VROSC/zzzz__ThereminOctaveControlUI_def.hpp"
//  Writing Method size for method: ::VROSC::ThereminOctaveControlUI.UpdateDisplayAndOutput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ThereminOctaveControlUI::*)()>(&::VROSC::ThereminOctaveControlUI::UpdateDisplayAndOutput)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x17995ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ThereminOctaveControlUI*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ThereminOctaveControlUI*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ThereminOctaveControlUI.GetNoteValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::VROSC::ThereminOctaveControlUI::*)(int32_t)>(&::VROSC::ThereminOctaveControlUI::GetNoteValue)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x179967c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ThereminOctaveControlUI*>::get(),
                        "GetNoteValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::ThereminOctaveControlUI._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::ThereminOctaveControlUI::*)()>(&::VROSC::ThereminOctaveControlUI::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17996fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ThereminOctaveControlUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void VROSC::ThereminOctaveControlUI::UpdateDisplayAndOutput()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ThereminOctaveControlUI*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t VROSC::ThereminOctaveControlUI::GetNoteValue(int32_t  octave)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ThereminOctaveControlUI*>::get(),
                        "GetNoteValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, octave);
}
inline void VROSC::ThereminOctaveControlUI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::ThereminOctaveControlUI*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::ThereminOctaveControlUI* VROSC::ThereminOctaveControlUI::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::ThereminOctaveControlUI*>());
}
// Ctor Parameters []
constexpr ::VROSC::ThereminOctaveControlUI::ThereminOctaveControlUI()   {
}
