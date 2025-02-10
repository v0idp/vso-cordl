#pragma once
// IWYU pragma private; include "Vuplex/WebView/Internal/CursorHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Vuplex/WebView/Internal/zzzz__CursorHelper_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "Vuplex/WebView/Internal/zzzz__CursorHelper_def.hpp"
//  Writing Method size for method: ::Vuplex::WebView::Internal::CursorHelper_CursorInfo._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Vuplex::WebView::Internal::CursorHelper_CursorInfo::*)(bool)>(&::Vuplex::WebView::Internal::CursorHelper_CursorInfo::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x17bc978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Vuplex::WebView::Internal::CursorHelper_CursorInfo::__cordl_internal_get_Centered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Centered;
}
constexpr bool const& Vuplex::WebView::Internal::CursorHelper_CursorInfo::__cordl_internal_get_Centered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Centered;
}
constexpr void Vuplex::WebView::Internal::CursorHelper_CursorInfo::__cordl_internal_set_Centered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Centered = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& Vuplex::WebView::Internal::CursorHelper_CursorInfo::__cordl_internal_get_Texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& Vuplex::WebView::Internal::CursorHelper_CursorInfo::__cordl_internal_get_Texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Texture;
}
constexpr void Vuplex::WebView::Internal::CursorHelper_CursorInfo::__cordl_internal_set_Texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Texture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Vuplex::WebView::Internal::CursorHelper_CursorInfo::_ctor(bool  centered)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, centered);
}
inline ::Vuplex::WebView::Internal::CursorHelper_CursorInfo* Vuplex::WebView::Internal::CursorHelper_CursorInfo::New_ctor(bool  centered)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>(centered));
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::CursorHelper_CursorInfo::CursorHelper_CursorInfo()   {
}
//  Writing Method size for method: ::Vuplex::WebView::Internal::CursorHelper.SetCursorIcon
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::Vuplex::WebView::Internal::CursorHelper::SetCursorIcon)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x17bc68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::CursorHelper*>::get(),
                        "SetCursorIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline void Vuplex::WebView::Internal::CursorHelper::setStaticF__supportedCursors(::System::Collections::Generic::Dictionary_2<::StringW,::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>*, "_supportedCursors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::CursorHelper*>::get>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>* Vuplex::WebView::Internal::CursorHelper::getStaticF__supportedCursors()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Vuplex::WebView::Internal::CursorHelper_CursorInfo*>*, "_supportedCursors", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::CursorHelper*>::get>();
}
inline void Vuplex::WebView::Internal::CursorHelper::SetCursorIcon(::StringW  cursorType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Vuplex::WebView::Internal::CursorHelper*>::get(),
                        "SetCursorIcon",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cursorType);
}
// Ctor Parameters []
constexpr ::Vuplex::WebView::Internal::CursorHelper::CursorHelper()   {
}
