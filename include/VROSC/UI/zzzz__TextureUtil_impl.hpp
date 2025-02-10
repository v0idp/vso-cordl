#pragma once
// IWYU pragma private; include "VROSC/UI/TextureUtil.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/UI/zzzz__TextureUtil_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::VROSC::UI::TextureUtil.GetSwatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Texture2D*, int32_t, int32_t)>(&::VROSC::UI::TextureUtil::GetSwatch)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x17e6ba0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get(),
                        "GetSwatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::TextureUtil.WriteSwatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture2D*, ::UnityEngine::Color, int32_t, int32_t)>(&::VROSC::UI::TextureUtil::WriteSwatch)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x17e6ebc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get(),
                        "WriteSwatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::TextureUtil.CreateSwatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> (*)(::UnityEngine::Color, int32_t)>(&::VROSC::UI::TextureUtil::CreateSwatch)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x17e8df0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get(),
                        "CreateSwatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::UI::TextureUtil.CreateSwatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> (*)(::UnityEngine::Color, int32_t, int32_t)>(&::VROSC::UI::TextureUtil::CreateSwatch)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x17e8e78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get(),
                        "CreateSwatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::UI::TextureUtil::setStaticF_SwatchSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SwatchSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get>(std::forward<int32_t>(value));
}
inline int32_t VROSC::UI::TextureUtil::getStaticF_SwatchSize()  {
return ::cordl_internals::getStaticField<int32_t, "SwatchSize", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get>();
}
inline ::UnityEngine::Color VROSC::UI::TextureUtil::GetSwatch(::UnityEngine::Texture2D*  texture, int32_t  index, int32_t  place)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get(),
                        "GetSwatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(nullptr, ___internal_method, texture, index, place);
}
inline void VROSC::UI::TextureUtil::WriteSwatch(::UnityEngine::Texture2D*  texture, ::UnityEngine::Color  color, int32_t  index, int32_t  place)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get(),
                        "WriteSwatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture, color, index, place);
}
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> VROSC::UI::TextureUtil::CreateSwatch(::UnityEngine::Color  color, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get(),
                        "CreateSwatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, false>(nullptr, ___internal_method, color, size);
}
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> VROSC::UI::TextureUtil::CreateSwatch(::UnityEngine::Color  color, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::UI::TextureUtil*>::get(),
                        "CreateSwatch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>, false>(nullptr, ___internal_method, color, width, height);
}
// Ctor Parameters []
constexpr ::VROSC::UI::TextureUtil::TextureUtil()   {
}
