#pragma once
// IWYU pragma private; include "VROSC/FrameVisuals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VROSC/zzzz__FrameVisuals_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::VROSC::FrameVisuals.CreateBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FrameVisuals::*)()>(&::VROSC::FrameVisuals::CreateBlock)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x17adf0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FrameVisuals*>::get(),
                        "CreateBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FrameVisuals.UpdateCreationAmount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FrameVisuals::*)(float_t)>(&::VROSC::FrameVisuals::UpdateCreationAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17adf6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FrameVisuals*>::get(),
                        "UpdateCreationAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::FrameVisuals._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VROSC::FrameVisuals::*)()>(&::VROSC::FrameVisuals::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x17adf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FrameVisuals*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::MaterialPropertyBlock*& VROSC::FrameVisuals::__cordl_internal_get__propBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& VROSC::FrameVisuals::__cordl_internal_get__propBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____propBlock;
}
constexpr void VROSC::FrameVisuals::__cordl_internal_set__propBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& VROSC::FrameVisuals::__cordl_internal_get__createdAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createdAmount;
}
constexpr float_t const& VROSC::FrameVisuals::__cordl_internal_get__createdAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createdAmount;
}
constexpr void VROSC::FrameVisuals::__cordl_internal_set__createdAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____createdAmount = value;
}
inline void VROSC::FrameVisuals::CreateBlock()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FrameVisuals*>::get(),
                        "CreateBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void VROSC::FrameVisuals::UpdateCreationAmount(float_t  createdAmount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FrameVisuals*>::get(),
                        "UpdateCreationAmount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, createdAmount);
}
inline void VROSC::FrameVisuals::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::FrameVisuals*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VROSC::FrameVisuals* VROSC::FrameVisuals::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VROSC::FrameVisuals*>());
}
// Ctor Parameters []
constexpr ::VROSC::FrameVisuals::FrameVisuals()   {
}
