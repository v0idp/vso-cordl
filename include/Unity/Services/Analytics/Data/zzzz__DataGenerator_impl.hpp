#pragma once
// IWYU pragma private; include "Unity/Services/Analytics/Data/DataGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Analytics/Data/zzzz__IDataGenerator_impl.hpp"
#include "Unity/Services/Analytics/Data/zzzz__DataGenerator_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "Unity/Services/Analytics/Data/zzzz__DataGenerator_def.hpp"
#include "Unity/Services/Analytics/Data/zzzz__StdCommonParams_def.hpp"
#include "Unity/Services/Analytics/Internal/zzzz__IBuffer_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState::DataGenerator_SessionEndState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState::DataGenerator_SessionEndState()   {
}
constexpr ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState  Unity::Services::Analytics::Data::DataGenerator_SessionEndState::PAUSED{static_cast<int32_t>(0x0)};
constexpr ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState  Unity::Services::Analytics::Data::DataGenerator_SessionEndState::KILLEDINBACKGROUND{static_cast<int32_t>(0x1)};
constexpr ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState  Unity::Services::Analytics::Data::DataGenerator_SessionEndState::KILLEDINFOREGROUND{static_cast<int32_t>(0x2)};
constexpr ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState  Unity::Services::Analytics::Data::DataGenerator_SessionEndState::QUIT{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::Unity::Services::Analytics::Data::DataGenerator.SetBuffer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Data::DataGenerator::*)(::Unity::Services::Analytics::Internal::IBuffer*)>(&::Unity::Services::Analytics::Data::DataGenerator::SetBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8f8d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::DataGenerator*>::get(),
                        "SetBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IBuffer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Data::DataGenerator.GameRunning
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Data::DataGenerator::*)(::System::DateTime, ::Unity::Services::Analytics::Data::StdCommonParams*, ::StringW)>(&::Unity::Services::Analytics::Data::DataGenerator::GameRunning)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2e8f8dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::DataGenerator*>::get(),
                        "GameRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Data::StdCommonParams*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Data::DataGenerator.GameEnded
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Data::DataGenerator::*)(::System::DateTime, ::Unity::Services::Analytics::Data::StdCommonParams*, ::StringW, ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState)>(&::Unity::Services::Analytics::Data::DataGenerator::GameEnded)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x2e8fa80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::DataGenerator*>::get(),
                        "GameEnded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Data::StdCommonParams*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Data::DataGenerator_SessionEndState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Analytics::Data::DataGenerator._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Analytics::Data::DataGenerator::*)()>(&::Unity::Services::Analytics::Data::DataGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e8b1c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::DataGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Services::Analytics::Internal::IBuffer*& Unity::Services::Analytics::Data::DataGenerator::__cordl_internal_get_m_Buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
constexpr ::Unity::Services::Analytics::Internal::IBuffer* const& Unity::Services::Analytics::Data::DataGenerator::__cordl_internal_get_m_Buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Buffer;
}
constexpr void Unity::Services::Analytics::Data::DataGenerator::__cordl_internal_set_m_Buffer(::Unity::Services::Analytics::Internal::IBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Unity::Services::Analytics::Data::DataGenerator::SetBuffer(::Unity::Services::Analytics::Internal::IBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::DataGenerator*>::get(),
                        "SetBuffer",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Internal::IBuffer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void Unity::Services::Analytics::Data::DataGenerator::GameRunning(::System::DateTime  datetime, ::Unity::Services::Analytics::Data::StdCommonParams*  commonParams, ::StringW  callingMethodIdentifier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::DataGenerator*>::get(),
                        "GameRunning",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Data::StdCommonParams*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datetime, commonParams, callingMethodIdentifier);
}
inline void Unity::Services::Analytics::Data::DataGenerator::GameEnded(::System::DateTime  datetime, ::Unity::Services::Analytics::Data::StdCommonParams*  commonParams, ::StringW  callingMethodIdentifier, ::Unity::Services::Analytics::Data::DataGenerator_SessionEndState  quitState)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::DataGenerator*>::get(),
                        "GameEnded",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Data::StdCommonParams*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Analytics::Data::DataGenerator_SessionEndState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, datetime, commonParams, callingMethodIdentifier, quitState);
}
inline void Unity::Services::Analytics::Data::DataGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Analytics::Data::DataGenerator*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Services::Analytics::Data::DataGenerator* Unity::Services::Analytics::Data::DataGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Analytics::Data::DataGenerator*>());
}
/// @brief Convert operator to "::Unity::Services::Analytics::Data::IDataGenerator"
constexpr  Unity::Services::Analytics::Data::DataGenerator::operator ::Unity::Services::Analytics::Data::IDataGenerator*() noexcept {
return static_cast<::Unity::Services::Analytics::Data::IDataGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Services::Analytics::Data::IDataGenerator"
constexpr ::Unity::Services::Analytics::Data::IDataGenerator* Unity::Services::Analytics::Data::DataGenerator::i___Unity__Services__Analytics__Data__IDataGenerator() noexcept {
return static_cast<::Unity::Services::Analytics::Data::IDataGenerator*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Unity::Services::Analytics::Data::DataGenerator::DataGenerator()   {
}
