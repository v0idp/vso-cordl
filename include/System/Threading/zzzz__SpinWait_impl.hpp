#pragma once
// IWYU pragma private; include "System/Threading/SpinWait.hpp"
#include "System/Threading/zzzz__SpinWait_def.hpp"
//  Writing Method size for method: ::System::Threading::SpinWait.get_Count
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27a91a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.get_NextSpinWillYield
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::get_NextSpinWillYield)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27a91ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "get_NextSpinWillYield",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.SpinOnce
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinWait::*)()>(&::System::Threading::SpinWait::SpinOnce)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27a90b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "SpinOnce",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.SpinOnce
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinWait::*)(int32_t)>(&::System::Threading::SpinWait::SpinOnce)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x27a8d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "SpinOnce",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinWait.SpinOnceCore
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinWait::*)(int32_t)>(&::System::Threading::SpinWait::SpinOnceCore)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x27a9224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "SpinOnceCore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Threading::SpinWait::setStaticF_SpinCountforSpinBeforeWait(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SpinCountforSpinBeforeWait", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::SpinWait::getStaticF_SpinCountforSpinBeforeWait()  {
return ::cordl_internals::getStaticField<int32_t, "SpinCountforSpinBeforeWait", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get>();
}
inline int32_t System::Threading::SpinWait::get_Count()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "get_Count",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Threading::SpinWait::get_NextSpinWillYield()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "get_NextSpinWillYield",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::SpinWait::SpinOnce()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "SpinOnce",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::SpinWait::SpinOnce(int32_t  sleep1Threshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "SpinOnce",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sleep1Threshold);
}
inline void System::Threading::SpinWait::SpinOnceCore(int32_t  sleep1Threshold)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinWait>::get(),
                        "SpinOnceCore",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sleep1Threshold);
}
// Ctor Parameters [CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::SpinWait::SpinWait(int32_t  _count) noexcept  {
this->_count = _count;
}
// Ctor Parameters []
constexpr ::System::Threading::SpinWait::SpinWait()   {
}
