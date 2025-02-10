#pragma once
// IWYU pragma private; include "VROSC/LoopStationRecordingLengths.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VROSC/zzzz__LoopStationRecordingLengths_def.hpp"
//  Writing Method size for method: ::VROSC::LoopStationRecordingLengths.get_PossibleLoopLengthNames
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)()>(&::VROSC::LoopStationRecordingLengths::get_PossibleLoopLengthNames)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18bc1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get(),
                        "get_PossibleLoopLengthNames",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingLengths.get_PossibleLoopLengths
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t,::Array<float_t>*> (*)()>(&::VROSC::LoopStationRecordingLengths::get_PossibleLoopLengths)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x18bc22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get(),
                        "get_PossibleLoopLengths",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingLengths.get_MaxLoopLengthBars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::VROSC::LoopStationRecordingLengths::get_MaxLoopLengthBars)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x18bc284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get(),
                        "get_MaxLoopLengthBars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VROSC::LoopStationRecordingLengths.GetIndexOfLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(float_t)>(&::VROSC::LoopStationRecordingLengths::GetIndexOfLength)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x18aeff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get(),
                        "GetIndexOfLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline void VROSC::LoopStationRecordingLengths::setStaticF__possibleLoopLengths(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_possibleLoopLengths", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get>(std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
inline ::ArrayW<::StringW,::Array<::StringW>*> VROSC::LoopStationRecordingLengths::getStaticF__possibleLoopLengths()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW,::Array<::StringW>*>, "_possibleLoopLengths", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get>();
}
inline void VROSC::LoopStationRecordingLengths::setStaticF__parsedLoopLengths(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t,::Array<float_t>*>, "_parsedLoopLengths", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get>(std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t,::Array<float_t>*> VROSC::LoopStationRecordingLengths::getStaticF__parsedLoopLengths()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t,::Array<float_t>*>, "_parsedLoopLengths", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get>();
}
inline ::ArrayW<::StringW,::Array<::StringW>*> VROSC::LoopStationRecordingLengths::get_PossibleLoopLengthNames()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get(),
                        "get_PossibleLoopLengthNames",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
inline ::ArrayW<float_t,::Array<float_t>*> VROSC::LoopStationRecordingLengths::get_PossibleLoopLengths()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get(),
                        "get_PossibleLoopLengths",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t,::Array<float_t>*>, false>(nullptr, ___internal_method);
}
inline float_t VROSC::LoopStationRecordingLengths::get_MaxLoopLengthBars()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get(),
                        "get_MaxLoopLengthBars",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline int32_t VROSC::LoopStationRecordingLengths::GetIndexOfLength(float_t  length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VROSC::LoopStationRecordingLengths*>::get(),
                        "GetIndexOfLength",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, length);
}
// Ctor Parameters []
constexpr ::VROSC::LoopStationRecordingLengths::LoopStationRecordingLengths()   {
}
