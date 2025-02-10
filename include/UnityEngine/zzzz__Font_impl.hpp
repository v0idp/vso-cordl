#pragma once
// IWYU pragma private; include "UnityEngine/Font.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::UnityEngine::Font_FontTextureRebuildCallback._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Font_FontTextureRebuildCallback::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::Font_FontTextureRebuildCallback::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3002bf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font_FontTextureRebuildCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font_FontTextureRebuildCallback.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Font_FontTextureRebuildCallback::*)()>(&::UnityEngine::Font_FontTextureRebuildCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3002c7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font_FontTextureRebuildCallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font_FontTextureRebuildCallback*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
inline void UnityEngine::Font_FontTextureRebuildCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font_FontTextureRebuildCallback*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::Font_FontTextureRebuildCallback::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font_FontTextureRebuildCallback*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Font_FontTextureRebuildCallback* UnityEngine::Font_FontTextureRebuildCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Font_FontTextureRebuildCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::Font_FontTextureRebuildCallback::Font_FontTextureRebuildCallback()   {
}
//  Writing Method size for method: ::UnityEngine::Font.add_textureRebuilt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Font>>*)>(&::UnityEngine::Font::add_textureRebuilt)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x30028d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "add_textureRebuilt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Font>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.remove_textureRebuilt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::Font>>*)>(&::UnityEngine::Font::remove_textureRebuilt)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x300299c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "remove_textureRebuilt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Font>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_material
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_material)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3002a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "get_material",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_dynamic
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_dynamic)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3001960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "get_dynamic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.get_fontSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Font::*)()>(&::UnityEngine::Font::get_fontSize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3002aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "get_fontSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.InvokeTextureRebuilt_Internal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Font*)>(&::UnityEngine::Font::InvokeTextureRebuilt_Internal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3002ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "InvokeTextureRebuilt_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.HasCharacter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Font::*)(char16_t)>(&::UnityEngine::Font::HasCharacter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3002b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "HasCharacter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Font.HasCharacter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Font::*)(int32_t)>(&::UnityEngine::Font::HasCharacter)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3002bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "HasCharacter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Font_FontTextureRebuildCallback*& UnityEngine::Font::__cordl_internal_get_m_FontTextureRebuildCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FontTextureRebuildCallback;
}
constexpr ::UnityEngine::Font_FontTextureRebuildCallback* const& UnityEngine::Font::__cordl_internal_get_m_FontTextureRebuildCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FontTextureRebuildCallback;
}
constexpr void UnityEngine::Font::__cordl_internal_set_m_FontTextureRebuildCallback(::UnityEngine::Font_FontTextureRebuildCallback*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FontTextureRebuildCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Font::setStaticF_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::Font>>*, "textureRebuilt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get>(std::forward<::System::Action_1<::UnityW<::UnityEngine::Font>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::Font>>* UnityEngine::Font::getStaticF_textureRebuilt()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::Font>>*, "textureRebuilt", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get>();
}
inline void UnityEngine::Font::add_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "add_textureRebuilt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Font>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Font::remove_textureRebuilt(::System::Action_1<::UnityW<::UnityEngine::Font>>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "remove_textureRebuilt",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Font>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Font::get_material()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "get_material",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline bool UnityEngine::Font::get_dynamic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "get_dynamic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Font::get_fontSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "get_fontSize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Font::InvokeTextureRebuilt_Internal(::UnityEngine::Font*  font)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "InvokeTextureRebuilt_Internal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, font);
}
inline bool UnityEngine::Font::HasCharacter(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "HasCharacter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool UnityEngine::Font::HasCharacter(int32_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Font*>::get(),
                        "HasCharacter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::UnityEngine::Font::Font()   {
}
